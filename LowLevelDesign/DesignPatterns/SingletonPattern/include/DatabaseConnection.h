#ifndef DATABASE_CONNECTION_H
#define DATABASE_CONNECTION_H
#include <string>
class DatabaseConnection{
private:
  DatabaseConnection();
  static DatabaseConnection* dbConnection;
  static std::string connectionString;
public:
  static DatabaseConnection* getDatabaseConnection();
};
#endif