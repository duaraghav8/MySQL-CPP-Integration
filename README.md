I have written this guide after I realized that a lot of my classmates were facing trouble with C++ MySQL Integration. The guide describes how to go about installing MySql Support, connecting and sending a query to the Database in C / C++ under Ubuntu (can be extended to all Linux distros with minimal effort) and Windows.

Before following this guide, create a database in your mysql. Name it anything. Then create a table inside it and name it anything. You're going to be giving the Database Name and Query you want to execute as input to the program any way.

**Ubuntu**

Fire up your Terminal and type the following:

	sudo apt-get install libmysql++-dev

Now, download the basic_connection.cpp file in this directory. Compile it with the following command:

	g++ basic_connection.cpp -lmysqlclient -lz -o program_name

Now, well, RUN IT!

	./program_name

If the output is something like:

	Connection Successful

Then you are in luck. Congrats! You just created your first SQL application in C++. Go ahead and uncomment the line that starts with "mysql_query (..." to actually see your query in action. If it didn't work, feel free to approach me any time (and don't forget to bring a Snickers, I don't give free advise).

------------------------------------------------------------------------------------------------------------------

**Windows**

1. https://dev.mysql.com/downloads/connector/c/ - Download the MSI Installer which says (x86, 64-bit) (I'm assuming you're working on the *extremely efficient* Toshiba the College gave us)

2. http://dev.mysql.com/doc/connector-cpp/en/connector-cpp-apps-windows-visual-studio.html - Follow this guide. You're gonna have to read a little bit, life is not that simple.
