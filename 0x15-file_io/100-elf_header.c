#include "main.h"
#include <stdio.h>

/**
 * main - Displays the information contained in the ELF header of a file.
 * @argc: Number of arguments.
 * @argv: Arguments passed to the program.
 *
 * Return: 0 on success, 98 on failure.
 */

void print_32_header(int fd, char *filename);
void print_64_header(int fd, char *filename);
char *get_type_name(unsigned int type);
char *get_osabi_name(unsigned int osabi);

int main(int argc, char *argv[])
{
    int fd;
    Elf32_Ehdr header32;
    Elf64_Ehdr header64;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
        return (98);
    }

    if (read(fd, &header32, sizeof(header32)) != sizeof(header32))
    {
        close(fd);
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header of file %s\n", argv[1]);
        return (98);
    }

    /* Validate if it's a valid ELF file */
    if (header32.e_ident[EI_MAG0] != ELFMAG0 || header32.e_ident[EI_MAG1] != ELFMAG1 ||
        header32.e_ident[EI_MAG2] != ELFMAG2 || header32.e_ident[EI_MAG3] != ELFMAG3)
    {
        close(fd);
        dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
        return (98);
    }

    lseek(fd, 0, SEEK_SET);

    /* Based on the class, read and print the appropriate header */
    if (header32.e_ident[EI_CLASS] == ELFCLASS32)
        print_32_header(fd, argv[1]);
    else if (header32.e_ident[EI_CLASS] == ELFCLASS64)
        print_64_header(fd, argv[1]);

    close(fd);
    return (0);
}

/**
 * print_32_header - Print the ELF32 header information.
 * @fd: File descriptor of the ELF file.
 * @filename: Name of the file.
 */
void print_32_header(int fd, char *filename)
{
    Elf32_Ehdr header;
    if (read(fd, &header, sizeof(header)) == sizeof(header))
    {
        printf("ELF Header:\n");
        printf("  Magic:   ");
        for (int i = 0; i < EI_NIDENT; ++i)
            printf("%02x%c", header.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
        printf("  Class:                             ELF32\n");
        printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
               "2's complement, little endian" : "2's complement, big endian");
        printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
        printf("  OS/ABI:                            %s\n", get_osabi_name(header.e_ident[EI_OSABI]));
        printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
        printf("  Type:                              %s\n", get_type_name(header.e_type));
        printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);
    }
    else
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header of file %s\n", filename);
}

/**
 * print_64_header - Print the ELF64 header information.
 * @fd: File descriptor of the ELF file.
 * @filename: Name of the file.
 */
void print_64_header(int fd, char *filename)
{
    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) == sizeof(header))
    {
        printf("ELF Header:\n");
        printf("  Magic:   ");
        for (int i = 0; i < EI_NIDENT; ++i)
            printf("%02x%c", header.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
        printf("  Class:                             ELF64\n");
        printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
               "2's complement, little endian" : "2's complement, big endian");
        printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
        printf("  OS/ABI:                            %s\n", get_osabi_name(header.e_ident[EI_OSABI]));
        printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
        printf("  Type:                              %s\n", get_type_name(header.e_type));
        printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);
    }
    else
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header of file %s\n", filename);
}

/**
 * get_type_name - Get the string representation of the ELF file type.
 * @type: Type of the ELF file.
 * Return: Corresponding string for the type.
 */
char *get_type_name(unsigned int type)
{
    switch (type)
    {
        case ET_NONE: return "NONE (None)";
        case ET_REL: return "REL (Relocatable file)";
        case ET_EXEC: return "EXEC (Executable file)";
        case ET_DYN: return "DYN (Shared object file)";
        case ET_CORE: return "CORE (Core file)";
        default: return "<unknown>";
    }
}

/**
 * get_osabi_name - Get the string representation of the OS/ABI.
 * @osabi: OS/ABI of the ELF file.
 * Return: Corresponding string for the OS/ABI.
 */
char *get_osabi_name(unsigned int osabi)
{
    switch (osabi)
    {
        case ELFOSABI_NONE: return "UNIX - System V";
        case ELFOSABI_SYSV: return "UNIX - System V";
        case ELFOSABI_LINUX: return "UNIX - Linux";
        case ELFOSABI_SOLARIS: return "UNIX - Solaris";
        case ELFOSABI_FREEBSD: return "UNIX - FreeBSD";
        case ELFOSABI_NETBSD: return "UNIX - NetBSD";
        default: return "<unknown>";
    }
}
