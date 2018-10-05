# nginx-modules

git clone https://github.com/gluchianov/nginx-modules.git

cd nginx-modules/nginx-1.7.5

chmod +x *

apt-get install libpcre3-dev libssl-dev gcc g++ make

./configure --add-module=module/rtmp-module --add-module=module/vod-module

wget -O /etc/init.d/nginx  https://raw.githubusercontent.com/gluchianov/nginx-modules/master/nginx.service 

chmod +x /etc/init.d/nginx

update-rc.d nginx defaults

ln -s /usr/local/nginx/sbin/nginx /usr/bin/nginx

nginx -t
