/*
** EPITECH PROJECT, 2026
** open a window
** File description:
** day13
*/

#include <CSFML/Graphics.h>

static void handle_events(sfRenderWindow *win)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(win, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(win);
    }
}

int main(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *win = sfRenderWindow_create(
        mode, "Window", sfClose, sfWindowed, NULL
    );

    if (!win)
        return (84);
    while (sfRenderWindow_isOpen(win)) {
        handle_events(win);
        sfRenderWindow_clear(win, sfBlack);
        sfRenderWindow_display(win);
    }
    sfRenderWindow_destroy(win);
    return (0);
}
