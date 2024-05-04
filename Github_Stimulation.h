#pragma once
#include <iostream>
#include <string>
using namespace std;
class repositoryTree
{
	string RepositoryName;
	class File
	{
	public:
		string fileName;
		File* next;
		File(string n);
	};
	class Commit
	{
	public:
		string commitName;
		Commit(string n);

	};
	class treeNode
	{
	public:
		treeNode* root;
		treeNode* left;
		treeNode* right;
		File* Filex;
		Commit* commit;

	};
};