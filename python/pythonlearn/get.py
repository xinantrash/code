import requests

r = requests.get("http://www.4399.com")

if ( r.status_code==200 ):
    r.encoding = 'utf-8'
    print(r.text)
