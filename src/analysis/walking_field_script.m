data = readtable('walking_data_field.csv');

time_walk = data.Timestamp;
lat_walk = data.Latitude; 
lon_walk = data.Longitude;
alt_walk = data.Altitude;
easting_walk = data.utmEasting;
northing_walk = data.utmNorthing;


northing_walk = northing_walk/10^6;
easting_walk = easting_walk/10^5;


figure;
subplot(1,1,1);
plot(easting_walk ,northing_walk);
ylabel('Northing');
xlabel('Easting');

figure;
subplot(1,1,1);
plot(lat_walk ,lon_walk);
ylabel('lat_walk');
xlabel('lon_walk');

