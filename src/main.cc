#include <boost/program_options/cmdline.hpp>
#include <boost/program_options/options_description.hpp>
#include <boost/program_options/parsers.hpp>
#include <boost/program_options/variables_map.hpp>

#include <iostream>

namespace bp = boost::program_options;

int
main(int ac, char* av[])
{
  bp::options_description desc;

  bp::options_description available("Available Options");
  available.add_options()
    ("help,h", "Product this help message")
  ;

  bp::options_description mandatory("Mandatory options");
  mandatory.add_options()
    ("output,o", "Output director, where to put SQL versions")
  ;

  desc.add(mandatory).add(available);

  bp::variables_map vm;
  bp::store(bp::parse_command_line(ac, av, desc), vm);

  if (vm.count("help"))
  {
    std::cout << desc << std::endl;
    return 0;
  }

  if (!vm.count("output"))
  {
    std::cerr << "Missing parameter 'output'" << std::endl
              << desc << std::endl;
    return 1;
  }

  std::cout << "Hello World" << std::endl;
  return 0;
}
