/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 3: Net "
"\n"
"(_Note:_ the Windows version of this game is called NETGAME.EXE to "
"avoid clashing with Windows's own NET.EXE.) "
"\n"
"I originally saw this in the form of a Flash game called "
"FreeNet [1], written by Pavils Jurjans; there are several other "
"implementations under the name NetWalk. The computer prepares a "
"network by connecting up the centres of squares in a grid, and then "
"shuffles the network by rotating every tile randomly. Your job is "
"to rotate it all back into place. The successful solution will be "
"an entirely connected network, with no closed loops. As a visual "
"aid, all tiles which are connected to the one in the middle are "
"highlighted. "
"\n"
"[1] http://www.jurjans.lv/stuff/net/FreeNet.htm "
"\n"
"\n#3.1 Net controls "
"\n"
"This game can be played with either the keyboard or the mouse. The "
"controls are: "
"\n"
"_Select tile_: mouse pointer, arrow keys "
"\n"
"_Rotate tile anticlockwise_: left mouse button, `A' key "
"\n"
"_Rotate tile clockwise_: right mouse button, `D' key "
"\n"
"_Rotate tile by 180 degrees_: `F' key "
"\n"
"_Lock (or unlock) tile_: middle mouse button, shift-click, `S' key "
"\n"
"You can lock a tile once you're sure of its orientation. You "
"can also unlock it again, but while it's locked you can't "
"accidentally turn it. "
"\n"
"The following controls are not necessary to complete the game, but "
"may be useful: "
"\n"
"_Shift grid_: Shift + arrow keys "
"\n"
"On grids that wrap, you can move the origin of the grid, so "
"that tiles that were on opposite sides of the grid can be seen "
"together. "
"\n"
"_Move centre_: Ctrl + arrow keys "
"\n"
"You can change which tile is used as the source of highlighting. "
"(It doesn't ultimately matter which tile this is, as every tile "
"will be connected to every other tile in a correct solution, "
"but it may be helpful in the intermediate stages of solving the "
"puzzle.) "
"\n"
"_Jumble tiles_: `J' key "
"\n"
"This key turns all tiles that are not locked to random "
"orientations. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#3.2 Net parameters "
"\n"
"These parameters are available from the `Custom...' option on the "
"`Type' menu. "
"\n"
"_Width_, _Height_ "
"\n"
"Size of grid in tiles. "
"\n"
"_Walls wrap around_ "
"\n"
"If checked, flow can pass from the left edge to the right edge, "
"and from top to bottom, and vice versa. "
"\n"
"_Barrier probability_ "
"\n"
"A number between 0.0 and 1.0 controlling whether an immovable "
"barrier is placed between two tiles to prevent flow between "
"them (a higher number gives more barriers). Since barriers "
"are immovable, they act as constraints on the solution (i.e., "
"hints). "
"\n"
"The grid generation in Net has been carefully arranged so that "
"the barriers are independent of the rest of the grid. This "
"means that if you note down the random seed used to generate "
"the current puzzle (see section 2.2), change the _Barrier "
"probability_ parameter, and then re-enter the same random seed, "
"you should see exactly the same starting grid, with the only "
"change being the number of barriers. So if you're stuck on a "
"particular grid and need a hint, you could start up another "
"instance of Net, set up the same parameters but a higher barrier "
"probability, and enter the game seed from the original Net "
"window. "
"\n"
"_Ensure unique solution_ "
"\n"
"Normally, Net will make sure that the puzzles it presents have "
"only one solution. Puzzles with ambiguous sections can be more "
"difficult and more subtle, so if you like you can turn off this "
"feature and risk having ambiguous puzzles. (Also, finding _all_ "
"the possible solutions can be an additional challenge for an "
"advanced player.) "
"\n"
;
const char quick_help_text[] = "Rotate each tile to reassemble the network.";
