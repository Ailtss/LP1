#include <iostream>
#include "dado.h"
#include <string>
int main(int argc, char const *argv[])
{
	string player1;
	string player2;
	string player3;

    cout << "Entre o nome dos participantes: " << endl;
    
    player um("Alice");
    player dois("Bob");   
    player tres("Carl"); 
    
    Dado tetrahedron(1, 3);
    Dado cube(1, 6);           //Criação dos 5 tipos diferentes de dados.
    Dado octahedron(1, 8);
    Dado dodecahedron(1, 12);
    Dado icosahedron(1, 20);


    um.AumenteAgregado(tetrahedron.jogar());
    um.AumenteAgregado(cube.jogar());         
    um.AumenteAgregado(octahedron.jogar());    //Alice jogou os 5 dados.
    um.AumenteAgregado(dodecahedron.jogar());
    um.AumenteAgregado(icosahedron.jogar());

     cout << um.getNome() << " ficou com o agregado de: " << um.getAgregado() << endl;
     cout << endl;

    dois.AumenteAgregado(tetrahedron.jogar());
    dois.AumenteAgregado(cube.jogar());
    dois.AumenteAgregado(octahedron.jogar());   //Bob jogou os 5 dados.
    dois.AumenteAgregado(dodecahedron.jogar());
    dois.AumenteAgregado(icosahedron.jogar());

    cout << dois.getNome() << " ficou com o agregado de: " << dois.getAgregado() << endl;
    cout << endl;

    tres.AumenteAgregado(tetrahedron.jogar());
    tres.AumenteAgregado(cube.jogar());           //Carl jogou os 5 dados.
    tres.AumenteAgregado(octahedron.jogar());
    tres.AumenteAgregado(dodecahedron.jogar());
    tres.AumenteAgregado(icosahedron.jogar());

    cout << tres.getNome() << " ficou com o agregado de: " << tres.getAgregado() << endl;
    cout << endl;


    if(um.getAgregado() < dois.getAgregado() && um.getAgregado() < tres.getAgregado())
    {
  
  		cout << um.getNome() << " venceu!" << endl;
  		cout << endl;
    	
    }

    else if(dois.getAgregado() < um.getAgregado() && dois.getAgregado() < tres.getAgregado())
    {
    	
  		cout << dois.getNome() << " venceu!" << endl;
  		cout << endl;
    	
    }

    else 
    {
    	cout << tres.getNome() << " venceu!" << endl;
    	cout << endl;
    }


    	

	return 0;
}