// See the file  in the main distribution directory for copyright.


#include "plugin/Plugin.h"

#include "HTTP.h"

namespace plugin {
namespace Zeek_HTTP {

class Plugin : public plugin::Plugin {
public:
	plugin::Configuration Configure()
		{
		AddComponent(new ::analyzer::Component("HTTP", ::analyzer::http::HTTP_Analyzer::Instantiate));

		plugin::Configuration config;
		config.name = "Zeek::HTTP";
		config.description = "HTTP analyzer";
		return config;
		}
} plugin;

}
}
