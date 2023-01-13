/***************************************************************************
 *   ex3.cpp                                  Version 20221129.204702      *
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
 *   $ make ex3.xpp
 * ou
 *   $ g++ ex3.c -o ex3.xpp -Wall -Wextra -g -O0 -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */
#include <iostream> /* (Input/output library) Several standard stream objects */
using namespace std;
#include "libjda2.h"
/* #include "ex3.h" */ /* To be created for this template if needed */

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142306" */
#define VERSION "20221129.204702" /* Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* gcc -DDEBUG=1 */
#define DEBUG 0 /* Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif/* #include <assert.h> */ /* Verify assumptions with assert. Turn off with #define NDEBUG */
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

/* ---------------------------------------------------------------------- */
/* Prints help information
 *  usually called by opt -h or --help
 */
void document::help(void)
{
    IFDEBUG("help()");
    /* printf("%s - %s\n", "ex3", "Brief description"); */
    cout << "ex3 - Brief description\n";
    cout << "\nUsage: ex3\n\n";
    cout << "This program does...\n";
    /* add more stuff here */
    cout << "\nExit status:\n\t0 if ok.\n\t1 some error occurred.\n";
    cout << "\nTodo:\n\tLong options not implemented yet.\n";
    cout << "\nAuthor:\n\tWritten by Jesiel Dias Araujo <jda2@poli.br>\n\n";
    return;
}

/* ---------------------------------------------------------------------- */
/* Prints version and copyright information
 *  usually called by opt -V
 */
void document::copyr(void)
{
    IFDEBUG("copyr()");
    cout << "ex3 - Version " << VERSION << "\n";
    cout << "\nCopyright (C) 2022 Jesiel Dias Araujo <jda2@poli.br>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n";
    return;
}

/* ---------------------------------------------------------------------- */
/* This function does ...
 *
 * It receives as input ...
 *
 * It returns ...
 */
int main(void)
{
    /* local declarations */
    document doc; /* create an object of a class */
    int  x, max,min; /* general index */

    /* code */
    doc.help();
    doc.copyr();
	normal *n1 = new normal();
    cout<< "Digite os valor para normalizar\n";
	cin >>x;
	cout<< "Digite o valor maximo\n";
	cin >> max;
    cout<< "Digite o valor minimo\n";
	cin>> min;
	n1 ->actio(max, min,x);
	cout << n1->result<< endl;


    /* ...and we are done */
    return 0;
}


/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20220718.172615      */
