//结构体和共用体
struct date
{
	int month;
	int day;
	int year;
};

struct index_cards
{
	charbook_name[80];
	charauthor[30];
	struct date publish_date;
	longregister_num;
	float price;
}

struct Book
{
	char book_name[80];//书名
	charauthor[30];
	structdata publish_date;
	longregister_num;
	float price;
};

void main()
{
	Book book;
	
	printf("输入图书信息:\n");
	printf("book_name:");
	scanf("%s",&book.author);
}
