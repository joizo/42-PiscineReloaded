ifconfig | grep 'ether' -w | cut -c8- | rev | cut -c2- | rev
