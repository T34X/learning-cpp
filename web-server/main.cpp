#include "crow.h"

int main()
{
	crow::SimpleApp app;
	CROW_ROUTE(app, "/")([](){
			return "Ohayo, Sekai!";
			});
	app.port(666).run();
}
