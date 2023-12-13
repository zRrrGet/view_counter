#include <iostream>
#include <httplib.h>
#include <ViewCounter.hpp>

int main(void)
{
  using namespace httplib;

  Server svr;
  ViewCounter c;

  svr.Get("/", [&c](const Request& req, Response& res) {
    res.set_content(std::to_string(c.get()), "text/plain");
    c.increment();
  });

  svr.listen("localhost", 1234);
}