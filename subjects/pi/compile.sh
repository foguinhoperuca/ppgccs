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

# Compile latex project.

#!/bin/bash

show_usage()
{
    echo ""
    echo "PI - class notes - Copyright (C) 2012 Jefferson Campos - foguinho [dot] peruca [at] gmail [dot] com"
    echo "This program comes with ABSOLUTELY NO WARRANTY;"
    echo "This is free software, and you are welcome to redistribute it under certain conditions;"
    echo "usage: ./compile.sh lecture <lecture_number>"
    echo "usage: ./compile.sh subject"
    echo ""
}

lecture(){
    echo "compiling a lecture #" $1

    pdflatex lecture$1.tex
}

subject()
{
    SUBJECT=$1
    if [ -z $SUBJECT ]
    then
	SUBJECT=pi.tex
    fi

    echo "1 is $1"

    echo "SUBJECT is $SUBJECT"
#    pdflatex $SUBJECT

    if [ $2 == "bib" ]
    then
	echo "Compile bibliograph"
#	compile_bibliograph $SUBJECT
    fi

    echo "2 is $2"
}

compile_bibligraph()
{
    SUBJECT=$1
    if [ -e $SUBJECT ]
    then
	SUBJECT=pi.tex
    fi

    bibtex $SUBJECT
    pdflatex $SUBJECT
}


case $1 in 
    "lecture") lecture $2;;
    "subject") subject $2 $3;;
    *) show_usage;;
esac
