#include <iostream>
#include "include/DatabaseConnection.h"
DatabaseConnection* DatabaseConnection::dbConnection = nullptr;
std::string DatabaseConnection::connectionString;
DatabaseConnection::DatabaseConnection()
{
  connectionString = "db_con_string";
}

DatabaseConnection* DatabaseConnection::getDatabaseConnection()
{
  if(dbConnection != nullptr){
    std::cout<< "returned already created db connection with connection string " << connectionString << std::endl;
    return dbConnection;
  } 
  else{
    std::cout<< "created new connection with connection string " << connectionString << std::endl;
    return new DatabaseConnection();
  } 
}