#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <set>

struct UserNode
{
    std::string username;
    std::string password;
    UserNode* next;

    UserNode(std::string uname, std::string pword) : username(uname), password(pword), next(nullptr) {}
};

class UserHashTable
{
private:
    UserNode** table;
    int capacity;
    int hashFunction(std::string key);
    void loadFromFile();
    void saveToFile();
    void saveUsername();

public:
    UserHashTable(int size);
    ~UserHashTable();
    bool registerUser(std::string username, std::string password);
    bool loginUser(std::string username, std::string password);
    void logoutUser();
    void viewProfile();
};

