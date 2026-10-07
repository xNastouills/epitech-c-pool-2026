/*
** EPITECH PROJECT, 2026
** day12
** File description:
** test_cat.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <fcntl.h>
#include "test_cat.h"

Test(cat, read_valid_file, .init = cr_redirect_stdout)
{
    int fd = open("/tmp/cat_t1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    cr_assert_neq(fd, -1);
    write(fd, "Hello World\n", 12);
    close(fd);
    fd = open("/tmp/cat_t1.txt", O_RDONLY);
    cr_assert_neq(fd, -1);
    cr_assert_eq(read_memory(fd), 0);
    close(fd);
    cr_assert_stdout_eq_str("Hello World\n");
}

Test(cat, read_invalid_fd, .init = cr_redirect_stdout)
{
    cr_assert_eq(read_memory(-1), 84);
    cr_assert_stdout_eq_str("");
}

Test(cat, main_files_and_errors, .init = cr_redirect_stdout)
{
    char *av[] = {"cat", "/tmp/nope_cat.txt", "/tmp/cat_t1.txt", "/tmp",
        NULL};
    int fd = open("/tmp/cat_t1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    cr_assert_neq(fd, -1);
    write(fd, "ok\n", 3);
    close(fd);
    cr_assert_eq(cat_main(4, av), 84);
    cr_assert_stdout_eq_str("ok\n");
}

Test(cat, main_no_args, .init = cr_redirect_stdout)
{
    char *av[] = {"cat", NULL};

    cr_redirect_stdin();
    fclose(cr_get_redirected_stdin());
    cr_assert_eq(cat_main(1, av), 0);
    cr_assert_stdout_eq_str("");
}
