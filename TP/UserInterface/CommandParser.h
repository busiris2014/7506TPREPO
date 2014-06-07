#ifndef COMMANDPARSER_H_
#define COMMANDPARSER_H_

/* Definicion de las acciones */
#define TOMAR_TEXTO "-i"
#define PROCESAR_titulo "-t"
#define PROCESAR_AUTOR "-a"
#define PROCESAR_FECHA "-f"
#define PROCESAR_TITULO "-i"
#define PROCESAR_PALABRAS "-p"
#define LISTAR_ARCHIVOS "-l"
#define OBTENER_ARCHIVO "-o"
#define QUITAR_ARCHIVO "-e"
#define QUITAR_ARCHIVO_FECHA "-ef"

#define CONSULTAR_FECHA "-qf"
#define CONSULTAR_titulo "-qt"
#define CONSULTAR_AUTOR "-qa"
#define CONSULTAR_TITULO "-qi"
#define CONSULTAR_PALABRAS "-qp"
#define VER_ESTRUCTURA "-v"
#define AYUDA "-h"

/* Definicion de las estructuras */
#define ARCHIVO_TERMINOS "-at"
#define ARCHIVO_NORMA_INFINITO "-ani"
#define ARCHIVO_OCURRENCIA_POSICIONAL "-aop"
#define LISTAS_INVERTIDAS "-li"

#define SPACE " "

#include "../Utility/Utility.h"
#include "../Business/IndexWrapper.h"
#include <iostream>
#include <string>
#include <list>
#include "Mediator.h"

using namespace std;

enum CommandOption
{
	TomarTexto = 0,
	ProcesarTitulo,
	ProcesarIdentificador,
	ProcesarAutor,
	ProcesarPalabras,
	ListarArchivos,
	ObtenerArchivo,
	QuitarArchivo,
	QuitarArchivoPorFecha,
	Consultartitulo,
	ConsultarAutor,
	ConsultarTitulo,
	ConsultarPalabras,
	VerEstructuraIndices,
	VerEstructuraArchivos,
	Ayuda,
	ConsultarFecha,
	ProcesarFecha,
};

class CommandParser {
private:
	string option;
	string pathFile;
	string queryTerm;
	string fileId;
	IndexWrapper::indexItem indexId;
	Mediator::fileItem IdFile;
	bool exportIndexStructure;

	// Funcion que informa si la opcion elegida corresponde a alguna respectiva a generacion de indices
	bool isIndexArguments(string option);

	// Funcion que informa si la opcion elegida corresponde a alguna respectiva a consultas
	bool isQueryArguments(string option);

	// Funcion que informa si la opcion elegida corresponde a alguna estructura
	bool isStructureArguments(string option);

public:
	CommandParser();
	virtual ~CommandParser();

	// Funcion que informa si los parametros ingresados con validos
	bool validArguments(int cant, char** params);

	// Funcion que imprime por pantalla la ayuda
	string printHelp();

	CommandOption getOption();
	string getPathFile();
	string getFileId();
	Mediator::fileItem getIdFile();
	string getQueryTerm();
	IndexWrapper::indexItem getIndexId();
};

#endif /* COMMANDPARSER_H_ */
