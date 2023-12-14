
### Minecraft con docker
```bash
docker run -d -it --name mcserver --restart=unless-stopped -e MEMORYSIZE='4G' -v /home/absol22/mcserver:/data:rw -p 25565:25565 -i marctv/minecraft-papermc-server:latest

docker attach macserver
```

## download something
sudo wget url

## DNS
https://www.duckdns.org/login-github?code=9c76944387c851a2c880&state=uhoibougyohouhpyh87yy
```bash
docker run -d \
  --name=duckdns \
  -e PUID=1000 `#optional` \
  -e PGID=1000 `#optional` \
  -e TZ=Europe/London \
  -e SUBDOMAINS=subdomain1,subdomain2 \
  -e TOKEN=token \
  -e LOG_FILE=false `#optional` \
  -v /path/to/appdata/config:/config `#optional` \
  --restart unless-stopped \
  lscr.io/linuxserver/duckdns:latest
```

