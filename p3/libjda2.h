/***************************************************************************
 *   libjda2.h                                Version 20221223.101013      *
 *                                                                         *
 *   Brief description                                                     *
 *   Copyright (C) 2022         by Jesiel Dias Araujo                      *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License.        *
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
 *   Webpage: beco.poli.br/jda2@poli.br                                    *
 *   Phone: (81) 99727-5679                                                *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */
/**
 * \file libjda2.h
 * \ingroup GroupUnique
 * \brief Brief description
 * \details This program really do a nice job as a template, and template only!
 * \version 20221223.101013
 * \date 2022-12-23
 * \author Jesiel Dias Araujo <<jda2@poli.br>>
 * \par Webpage
 * <<a href="beco.poli.br/jda2@poli.brusername">beco.poli.br/beco.poli.br/jda2@poli.brusernameusername</a>>
 * \copyright (c) 2022 GNU GPL v2
 * \note This program is free software: you can redistribute it
 * and/or modify it under the terms of the
 * GNU General Public License as published by
 * the Free Software Foundation version 2 of the License.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.
 * If not, write to the Free Software Foundation, Inc.,

*/
/* ---------------------------------------------------------------------- */
/* includes */

#ifndef libjda2_biblioteca_h
#define libjda2_biblioteca_h
#include<iostream>
#include <cstdlib>
#include<list>
using namespace std;

/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142628" */

#define VERSION "20221223.101013" /**< Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* gcc -DDEBUG=1 */
#define DEBUG 0 /**< Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif
/* #include <assert.h> */ /* Verify assumptions with assert. Turn off with #define NDEBUG */

/** @brief Debug message if DEBUG on */
#define IFDEBUG(M) if(DEBUG) fprintf(stderr, "[DEBUG file:%s line:%d]: " M "\n", __FILE__, __LINE__); else {;}


class normal{
	public:

	int max,min,n;
	void actio(int ma, int mi,int x );//metodo ma - maximo , mi - minimo , x - valor para normalizar
    int result;//resultado da normalizacao
	private:

};
//faça um programa que tenha uma classe que simula um laço para sorteio sem repeticao (usando listas), e coloque-a disponível para uso na sua biblioteca pessoal.
class sort{
	public:
		int num;
		void lucky(int n);
		int result;
	private:


};


#endif
/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
;
