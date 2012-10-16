# Copyright (C) 2008,2009,2012 Jefferson Campos - foguinho [dot] peruca [at] gmail [dot] com

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

# Compile latex project.

#!/bin/bash

show_usage()
{
    echo ""
    echo "firewall Copyright (C) 2008,2009,2012 Jefferson Campos - foguinho [dot] peruca [at] gmail [dot] com"
    echo "This program comes with ABSOLUTELY NO WARRANTY;"
    echo "This is free software, and you are welcome to redistribute it under certain conditions;"
    echo "usage: ./firewall.sh [start|stop|restart|tomcat|status]"
    echo ""
}

lecture(){
    echo "compiling a lecture #" $1

    pdflatex lecture$1.tex
}

subject()
{
    pdflatex pi.tex
    pdflatex pi.tex
    bibtex seminar_ecology.aux
    pdflatex seminar_ecology.tex
}

case $1 in 
    "lecture") lecture $2;;
    "subject") subject;;
    *) show_usage;;
esac


