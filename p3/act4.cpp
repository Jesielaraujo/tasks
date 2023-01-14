/***************************************************************************
 *   ex6.cpp                                  Version 20221223.095557      *
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
 *   $ make ex6.xpp
 * ou
 *   $ g++ ex6.c -o ex6.xpp -Wall -Wextra -g -O0 -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */
#include<exception>
#include <iostream> /* (Input/output library) Several standard stream objects */
using namespace std;

#ifndef VERSION /* g++ -DVERSION="0.1.160612.142306" */
#define VERSION "20221223.095557" /* Version Number (string) */
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

/* ---------------------------------------------------------------------- */
/* Prints help information
 *  usually called by opt -h or --help
 */
void document::help(void)
{
    IFDEBUG("help()");
    /* printf("%s - %s\n", "ex6", "Brief description"); */
    cout << "ex6 - Brief description\n";
    cout << "\nUsage: ex6\n\n";
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
    cout << "ex6 - Version " << VERSION << "\n";
    cout << "\nCopyright (C) 2022 Jesiel Dias Araujo <jda2@poli.br>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n";
    return;
}

 /* add more functions here */


double  divid(float n1,float n2)
{
	if(n2==0)
	{
     throw "\nErro ao dividir por 0(Zero)";
	}
	return (n1/n2);
}
double  mult(int n1,int n2)
{
	if(n2==0 || n1 ==0)
	{
     throw "\nErro ao multiplicar por 0(Zero)";
	}
	return (n1*n2);
}


/* ---------------------------------------------------------------------- */
/* This function does ...
 *
 * It receives as input ..
 * It returns ...
 */
int main(void)
{
    /* local declarations */
    document doc; /* create an object of a class */
    int i; /* general index */
    char s[SBUFF]; /* a string to hold ... */
	double  div,mu;
	float  n3,n4;
    /* code */
    doc.help();
    doc.copyr();
	cout << "digite 1 - MUltiplicacao \n digite 2 - Divisao\n";
	cin >> i;
	switch(i)
	{
   case 2:
	cout <<"insira dois numeros para dividir(Nao coloque o segundo numero como zero :) ):\n";
	cin >> n3;
	cin >> n4;
	try
	{
	div = divid(n3,n4);
    cout << div<< endl;
	}
	catch(const char* e)
	{
		cout << "Erro!"<< e << endl;
	}
    break;
   case 1:
	cout <<"insira dois numeros para multiplicar(Nao coloque os numero como zero :) ):\n";
	cin >> n3;
	cin >> n4;
	try
	{
	mu =mult(n3,n4);
    cout << mu << endl;
    }
	catch(const char* e)
	{
		cout << "Erro!"<< e << endl;
	}
	break;
   default:
	cout << "comando nao reconhecido! TENTE NOVAMENTE\n";
	break;
	}
    /* ...and we are done */
    return 0;
}

/* add more functions here */
/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20220718.172615      */
