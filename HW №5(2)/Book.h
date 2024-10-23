#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
	string author;
	string edition;
	string publication_date;
	long isbn;
public:
	Book();
	Book(string author, string edition, string publication_date, long isbn);

	void setAuthor(string author);
	void setEdition(string edition);
	void setPublicationDate(string publication_date);
	void setIsbn(long isbn);

	string getAuthor()const;
	string getEdition()const;
	string getPublicationDate()const;
	long getIsbn()const;

	void showBook()const;
};