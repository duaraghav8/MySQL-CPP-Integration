#include <iostream>
#include <string>
#include <mysql/mysql.h>
using namespace std;

int main () {
	string username, password, dbname;
	MYSQL *connection (mysql_init (NULL));

	cout << "Enter mysql username: ";
	cin >> username;
	cout << "Enter mysql password: ";
	cin >> password;
	cout << "Enter Database Name: ";
	cin >> dbname;

	if (!connection) {
		cout << "Connection to the API failed" << endl;
		return (0);
	}

	connection = mysql_real_connect (connection, "localhost", username.c_str (), password.c_str (), dbname.c_str (), 0, NULL, 0);
	if (connection) { cout << "Connection successful" << endl; }
	else { cout << "Connection to Database Failed because your provided wrong Username/Password/Database Name." << endl; return (1); }

/*
	Create a simple table named Logs in the database with just 1 field ID int like:
	create table Logs (ID int);

	This is required so the below instruction of mysql_query () works.
*/

//	mysql_query (connection, "insert into Logs values (11111)");
	mysql_close (connection);
	return (0);
}
