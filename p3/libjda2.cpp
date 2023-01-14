/***************************************************************************
 *   libjda2.cpp                              Version 20221223.101554      *
 *                                                                         *
 *   Brief description                                                     *
 *   Copyright (C) 2022         by Jesiel Dias Araujo                      *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Jesiel Dias Araujo                                                    *
 *   Email: jda2@poli.br                                                   *
 *   Webpage: http://beco.poli.br/jda2@poli.br                             *
 *   Phone: (81) 99727-5679                                                *
 ***************************************************************************/

/*
 * Instrucoes para compilar:
 *   $ make libjda2.xpp
 * ou
 *   $ g++ libjda2.c -o libjda2.xpp -Wall -Wextra -g -O0 -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */
#include <iostream> /* (Input/output library) Several standard stream objects */
#include "libjda2.h"

using namespace std;
/* #include "libjda2.hpp" */ /* To be created for this template if needed */

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* g++ -DVERSION="0.1.160612.142306" */
#define VERSION "20221223.101554" /* Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* g++ -DDEBUG=1 */
#define DEBUG 0 /* Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif
/* #include <cassert> */ /* (Error handling) Conditionally compiled macro that compares its argument to zero */

/* Debug message if DEBUG on */
#define IFDEBUG(M) if(DEBUG) fprintf(stderr, "[DEBUG file:%s line:%d]: " M "\n", __FILE__, __LINE__); else {;}

/* limits */
#define SBUFF 256 /* string buffer */

/* ---------------------------------------------------------------------- */
/* classes : better located at libxxx.h */

class document
{
    public:
        void help(void); /* print some help */
        void copyr(void); /* print version and copyright information */
};

/* ---------------------------------------------------------------------- */
/* methods */

void normal::actio(int ma,int mi,int x)
{
this-> result =  (x - ma )/(ma - mi);
}

void sort::lucky(int n)
{
	int x;
	unsigned seed = time(0);

    srand(seed);
	x= rand()%100;
	list<int> alet;//lista que vai armazenar os numeros aletorios

	for(int i =0 ; i<=n; i++)
	{
	alet.push_front(x);
	x= rand()%100;

	}

	cout << "Essa foi a quantidade de numeros sorteados: "<<alet.size() - 1<<endl;
	for(int i = 0; i<=n-1; i++)
	{
	cout<< alet.front() << endl;
	alet.pop_front();
   // result= alet.front();
	}
}

/* ---------------------------------------------------------------------- */
/* Prints help information
 *  usually called by opt -h or --help
 */


/* ---------------------------------------------------------------------- */
/* This function does ...
 * It receives as input ...
 *
 * It returns ...
 */
/*/

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20220718.172615      */

/*
int normali(int max,int min, int x)
{
	normal *n1 = new normal();
	cout<< "Digite os valor para normalizar\n";
   cin >>x;
	cout<< "Digite o valor maximo\n";
	cin >> max;
	cout<< "Digite o valor minimo\n";
	cin>> min;
	n1 ->actio(max, min,x);
	cout << n1->result<< endl;

}*/
