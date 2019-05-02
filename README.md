https://www2.gov.bc.ca/gov/content/data/geographic-data-services/topographic-data/terrain
https://extract.bbbike.org

cd mapnik
git submodule update --init --recursive --force
./configure SQLITE_INCLUDES=/usr/local/opt/sqlite3/include
make
make install
