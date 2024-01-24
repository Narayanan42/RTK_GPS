data = readtable('stationary_data_field.csv');

time_stat = data.Timestamp;
lat_stat = data.Latitude; 
lon_stat = data.Longitude;
alt_stat = data.Altitude;
easting_stat = data.utmEasting;
northing_stat = data.utmNorthing;

act_lat = mean(lat_stat);  
act_lon = mean(lon_stat);
northing_stat = northing_stat - min(northing_stat);
easting_stat = easting_stat - min(easting_stat);
time_stat = (time_stat - min(time_stat))/60;

lat_dev = lat_stat - act_lat;
lon_dev = lon_stat - act_lon;

figure;
subplot(2,1,1); 
plot(time_stat, lat_stat);
hold on;
yline(act_lat,'r--');
title('Time vs Latitude Data');
xlabel('Time(min)')
ylabel('Latitude')
grid on;

subplot(2,1,2);
plot(time_stat, lon_stat);
hold on;
yline(act_lon,'r--');
title('Time vs Longitude Data');
xlabel('Time(min)')
ylabel('Longitude')
grid on;

figure; 
subplot(2,1,1);
histogram(lat_stat);
title('Latitude Histogram');
grid on;

subplot(2,1,2);
histogram(lon_stat); 
title('Longitude Histogram');
grid on;

figure;
scatter(easting_stat, northing_stat);
xlabel('easting');
ylabel('northing');



