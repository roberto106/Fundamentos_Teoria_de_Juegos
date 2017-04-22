#include "IOManager.h"
#include <fstream>

using namespace std;


bool IOManager::readFileToBuffer(string filepath, vector<char> &buffer){

	ifstream file(filepath, ios::binary);
	if(file.fail()){
		//indica que error ha pasado
		perror(filepath.c_str());
		return false;
	}
	//final del archivo
	file.seekg(0,ios::endl);
	//peso del archivo
	int filesize=file.tellg();
	//inicio del archivo
	file.seekg(0,ios::beg);
	//peso del archivo -extras
	filesize-=file.tellg();
	//reacomoda tamaño
	buffer.resize(filesize);

	file.seekg(0,ios::beg);
	file.read(&read,filesize);
	file.close();
	
	return true;
}