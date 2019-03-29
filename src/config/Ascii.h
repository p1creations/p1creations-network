// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"__________  ____  _________                        __  .__                      \n"
"\______   \/_   | \_   ___ \_______   ____ _____ _/  |_|__| ____   ____   ______\n"
" |     ___/ |   | /    \  \/\_  __ \_/ __ \\__  \\   __\  |/  _ \ /    \ /  ___/\n"
" |    |     |   | \     \____|  | \/\  ___/ / __ \|  | |  (  <_> )   |  \\___ \ \n"
" |____|     |___|  \______  /|__|    \___  >____  /__| |__|\____/|___|  /____  >\n"
"                          \/             \/     \/                    \/     \/ \n"
"                _______          __                       __                    \n"
"                \      \   _____/  |___  _  _____________|  | __                \n"
"                /   |   \_/ __ \   __\ \/ \/ /  _ \_  __ \  |/ /                \n"
"               /    |    \  ___/|  |  \     (  <_> )  | \/    <                 \n"
"               \____|__  /\___  >__|   \/\_/ \____/|__|  |__|_ \                \n"
"                       \/     \/                              \/                \n"
;

const std::string nonWindowsAsciiArt = 
"__________  ____  _________                        __  .__                      \n"      
"\______   \/_   | \_   ___ \_______   ____ _____ _/  |_|__| ____   ____   ______\n"
" |     ___/ |   | /    \  \/\_  __ \_/ __ \\__  \\   __\  |/  _ \ /    \ /  ___/\n"
" |    |     |   | \     \____|  | \/\  ___/ / __ \|  | |  (  <_> )   |  \\___ \ \n"
" |____|     |___|  \______  /|__|    \___  >____  /__| |__|\____/|___|  /____  >\n"
"                          \/             \/     \/                    \/     \/ \n"
"                _______          __                       __                    \n"
"                \      \   _____/  |___  _  _____________|  | __                \n"
"                /   |   \_/ __ \   __\ \/ \/ /  _ \_  __ \  |/ /                \n"
"               /    |    \  ___/|  |  \     (  <_> )  | \/    <                 \n"
"               \____|__  /\___  >__|   \/\_/ \____/|__|  |__|_ \                \n"
"                       \/     \/                              \/                \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
