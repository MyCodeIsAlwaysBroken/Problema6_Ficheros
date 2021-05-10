#include <iostream>
#include <fstream>
using namespace std;

//Procedimiento encargado de copiar en mayúsculas el texto de un fichero
//origen es el texto original
//destino es el fichero donde estara la copia del original pero todo en mayúsculas
void duplicarFic(string origen, string destino){
    ifstream in;
    ofstream out;
    in.open(origen);
    out.open(destino);
    
    if(in.is_open() && out.is_open()){
	char c;
	while(in.get(c)){
      //Si se encuentra una letra en minúsucla la transforma en mayúsucula
	    if(c>='a' && c<='z'){
		c = c - 32;
	    }
	    out << c;
	}
	in.close();
	out.close();
	cout << "El fichero se ha copiado exitosamente." << endl;
    }
    else{
	cout << "Error al abrir el fichero." << endl;
    }
}

int main(){
    string docOriginal, docCopia;
    cout << "Introduce el nombre del fichero original: ";
    cin >> docOriginal;
    cout << " Introduce el nombre de la copia: ";
    cin >> docCopia;
    
    duplicarFic(docOriginal,docCopia);
    
    return 0;
}
