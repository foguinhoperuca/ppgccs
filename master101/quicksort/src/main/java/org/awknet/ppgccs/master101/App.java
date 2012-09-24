/*
 * Copyright (C) 2012 Jefferson Campos <foguinho.peruca@gmail.com>
 * This file is part of awknet-ppgccs - http://ppgccs.awknet.org
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

package org.awknet.ppgccs.master101;

import java.util.List;

public class App {
	public void jeff(List<Integer> X, int start, int end) {

		for (int i : X)
			System.out.println("ArrayList is: " + i);

		System.out.println("Lenght before: " + X.size());

		quicksortJeff(X, start, end);

		System.out.println("Lenght after: " + X.size());
		for (int value : X)
			System.out.println("Value by Jeff's algorithm: " + value);

	}

	private void quicksortJeff(List<Integer> X, int start, int end) {
		int i, j, pivot, aux;

		i = start;
		j = end;
		pivot = X.get((start + end) / 2);
		System.out.println("Pivot: " + pivot);

		while (i < j) {
			while (X.get(i) < pivot) {
				i = i + 1;
			}
			while (X.get(j) > pivot) {
				j = j - 1;
			}
			if (i <= j) {
				aux = X.get(i);
				X.add(i, X.get(j));
				X.add(j, aux);
				i = i + 1;
				j = j - 1;
			}
		}
		if (j > start)
			quicksortJeff(X, start, j);

		if (i < end)
			quicksortJeff(X, i, end);
	}

	public void wikipedia(int[] v, int start, int end) {
		System.out.println("\nWikipedia algorithm\n");
		System.out.println("Lenght of v: " + v.length);

		for (int value : v)
			System.out.println("value (from v) is: " + value);

		quick_sort(v, start, end);

		System.out.println("Vector orded:");
		for (int value : v)
			System.out.println("value (quick_sort) is: " + value);
	}

	private void quick_sort(int[] v, int ini, int fim) {
		int meio;

		if (ini < fim) {
			meio = partition(v, ini, fim);
			quick_sort(v, ini, meio);
			quick_sort(v, meio + 1, fim);
		}
	}

	private int partition(int[] v, int ini, int fim) {
		int pivo, topo, i;
		pivo = v[ini];
		topo = ini;

		for (i = ini + 1; i <= fim; i++) {
			if (v[i] < pivo) {
				v[topo] = v[i];
				v[i] = v[topo + 1];
				topo++;
			}
		}
		v[topo] = pivo;
		return topo;
	}
}
