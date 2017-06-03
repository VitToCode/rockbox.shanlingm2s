/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 6: Sixteen "
"\n"
"Another sliding tile puzzle, visually similar to Fifteen (see "
"chapter 5) but with a different type of move. This time, there is no "
"hole: all 16 squares on the grid contain numbered squares. Your move "
"is to shift an entire row left or right, or shift an entire column "
"up or down; every time you do that, the tile you shift off the grid "
"re-appears at the other end of the same row, in the space you just "
"vacated. To win, arrange the tiles into numerical order (1,2,3,4 on "
"the top row, 13,14,15,16 on the bottom). When you've done that, try "
"playing on different sizes of grid. "
"\n"
"I _might_ have invented this game myself, though only by accident "
"if so (and I'm sure other people have independently invented it). I "
"thought I was imitating a screensaver I'd seen, but I have a feeling "
"that the screensaver might actually have been a Fifteen-type puzzle "
"rather than this slightly different kind. So this might be the one "
"thing in my puzzle collection which represents creativity on my part "
"rather than just engineering. "
"\n"
"\n#6.1 Sixteen controls "
"\n"
"Left-clicking on an arrow will move the appropriate row or column in "
"the direction indicated. Right-clicking will move it in the opposite "
"direction. "
"\n"
"Alternatively, use the cursor keys to move the position indicator "
"around the edge of the grid, and use the return key to move the "
"row/column in the direction indicated. "
"\n"
"You can also move the tiles directly. Move the cursor onto a tile, "
"hold Control and press an arrow key to move the tile under the "
"cursor and move the cursor along with the tile. Or, hold Shift to "
"move only the tile. Pressing Enter simulates holding down Control "
"(press Enter again to release), while pressing Space simulates "
"holding down shift. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#6.2 Sixteen parameters "
"\n"
"The parameters available from the `Custom...' option on the `Type' "
"menu are: "
"\n"
"- _Width_ and _Height_, which are self-explanatory. "
"\n"
"- You can ask for a limited shuffling operation to be performed on "
"the grid. By default, Sixteen will shuffle the grid in such a "
"way that any arrangement is about as probable as any other. You "
"can override this by requesting a precise number of shuffling "
"moves to be performed. Typically your aim is then to determine "
"the precise set of shuffling moves and invert them exactly, "
"so that you answer (say) a four-move shuffle with a four-move "
"solution. Note that the more moves you ask for, the more likely "
"it is that solutions shorter than the target length will turn "
"out to be possible. "
"\n"
;
const char quick_help_text[] = "Slide a row at a time to arrange the tiles into order.";
