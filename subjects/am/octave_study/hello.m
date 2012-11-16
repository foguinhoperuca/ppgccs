#!/usr/bin/octave

# Copyright (C) 2012 Jefferson Campos - foguinho [dot] peruca [at] gmail [dot] com

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Exemple of a octave program.

printf ("Hello, world!\n");

printf ("%s", program_name ());
arg_list = argv ();
for i = 1:nargin
  printf (" %s", arg_list{i});
endfor
printf ("\n");

function countdown
# Count down for main rocket engines
  disp(3);
  disp(2);
  disp(1);
  disp("Blast Off!");  # Rocket leaves pad
endfunction