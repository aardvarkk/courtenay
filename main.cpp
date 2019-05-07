#include <mapnik/agg_renderer.hpp>
#include <mapnik/datasource_cache.hpp>
#include <mapnik/image.hpp>
#include <mapnik/image_util.hpp>
#include <mapnik/load_map.hpp>
#include <mapnik/map.hpp>

int main()
{
  mapnik::datasource_cache::instance().register_datasources("/usr/local/lib/mapnik/input");

  mapnik::Map m(1024,1024);
  mapnik::load_map(m, "example.xml");
  m.zoom_all();
  mapnik::image_rgba8 im(1024,1024);
  mapnik::agg_renderer<mapnik::image_rgba8> ren(m, im);
  ren.apply();
  mapnik::save_to_file(im, "the_image.png");
}
