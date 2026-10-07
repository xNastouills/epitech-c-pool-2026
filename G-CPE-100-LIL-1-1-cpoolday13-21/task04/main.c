#include <CSFML/Graphics.h>

int main(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *win = sfRenderWindow_create(
        mode, "GetMyHunter", sfClose, sfWindowed, NULL
    );
    sfTexture *text = sfTexture_createFromFile("img.jpg", NULL);
    sfSprite *sprite = sfSprite_create(text);
    sfEvent event;

    if (win == NULL || text == NULL || sprite == NULL)
        return (84);
    while (sfRenderWindow_isOpen(win)) {
        while (sfRenderWindow_pollEvent(win, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(win);
        }
        sfRenderWindow_clear(win, sfBlack);
        sfRenderWindow_drawSprite(win, sprite, NULL);
        sfRenderWindow_display(win);
    }
    sfSprite_destroy(sprite);
    sfTexture_destroy(text);
    sfRenderWindow_destroy(win);
    return (0);
}
