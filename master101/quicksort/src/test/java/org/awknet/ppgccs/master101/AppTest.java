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

import static org.junit.Assert.assertTrue;

import java.util.ArrayList;
import java.util.List;

import org.junit.Before;
import org.junit.Test;

public class AppTest {

	List<Integer> X;
	int start, end;
	int[] v;
	App instance;

	@Before
	public void setUp() throws Exception {
		instance = new App();

		start = 0;
		end = 9;
		X = new ArrayList<Integer>();
		for (int i = 9; i >= 0; i--)
			X.add(i);

		v = new int[10];
		for (int i = 9, j = 0; i >= 0; i--, j++)
			v[j] = i;
	}

	@Test
	public void testJeff() {
		System.out.println("----------------- Testing Jeff's algorithm: ");

		int initialSizeX = X.size();

		instance.jeff(X, start, end);

		assertTrue("Assert failed!!! ", initialSizeX == X.size());
	}

	@Test
	public void testWikipedia() {
		System.out.println("----------------- Testing wikipedia's algorithm: ");
		instance.wikipedia(v, start, end);
	}
}
