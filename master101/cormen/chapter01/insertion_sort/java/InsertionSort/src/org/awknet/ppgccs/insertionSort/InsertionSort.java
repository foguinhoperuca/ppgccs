/*
 * Copyright (C) 2012 Jefferson Campos <foguinho.peruca@gmail.com>
 * This file is part of awknet-ppgccs - my master degree - more info
 * can be found at http://ppgccs.awknet.org
 *
 * Awknet-ppgccs is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Awknet-ppgccs is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with awknet-ppgccs. If not, see <http://www.gnu.org/licenses/>.
 */

package org.awknet.ppgccs.insertionSort;

import java.util.List;
import java.util.ArrayList;

public class InsertionSort {

    public InsertionSort(){
    }

    public static void sort(List<Integer> deck) {
    	int i, j, key;
    	for (j = 1; j <= deck.size(); j++) {
	    System.out.println("j is " + j);
    	    key = deck.get(j);
    	    i = j - 1;
    	    while (i > -1 && deck.get(i) > key) {
		System.out.println("i is " + i);
    		deck.add(i + 1, deck.get(i));
    		i -= i;
    	    }
	    // System.out.println("Out of while loop");

    	    deck.add(i + 1, key);

	    // System.out.println("Deck is: /n");
	    // for (Integer card : deck) {
	    // 	System.out.println("Card is: " + card);
	    // }
	    // System.out.println("-------------------");
    	}
	System.out.println("Out of FOR!!");
    }

    public static void main(String[] args) {
	List<Integer> deck = new ArrayList<Integer>();

	deck.add(new Integer(5));
	deck.add(new Integer(2));
	deck.add(new Integer(4));
	deck.add(new Integer(6));
	deck.add(new Integer(1));
	deck.add(new Integer(3));

	InsertionSort.sort(deck);

	// for (Integer card : deck) {
	//     System.out.println("Card is: " + card);
	// }

	System.out.println("Bye!!!");
    }
}
