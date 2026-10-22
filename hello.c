#include <locale.h>
#include <curses.h>

int main(void)
{
	setlocale(LC_ALL, "");

	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	curs_set(0);

	printw("Hello, TUI!\nPress any key to exit.");
	refresh();
	getch();

	endwin();
	return 0;
}

