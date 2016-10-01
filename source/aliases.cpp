/*
TestAliases
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*	This tutorial illustrates the feature of reference,
*	 i.e. the address of a reference returns the address of its target.
*/

#include <iostream>
using namespace std;

int main() {
    int i;	 
    int* p;
    int* q;	  // initialize variables

    p = &i;   // p becomes the alias of q for the i
    *p = 30;  // store 30 in => do a PUT for L-values
    q = p;    // q gets p => q gets the value stored in p
	          //             q points to i
    *q = 40;  // go to i and PUT the 40

    printf("%s%i\n","*p: ",*p);	// *p: 40
    printf("%s%i\n","*q: ",*q);	// *q: 40
    printf("%s%i\n","i:  ", i);	// i:  40 
								// Results are because p and q both points to the same "pointee" i,
								// and codes in line 35 change the value of what they points to, i.e. the value of i.

}

