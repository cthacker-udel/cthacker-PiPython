import requests
import sys
from pprint import pprint
import firstscript.py
from firstscript.py import scroll_message_default as scroll_message

base_url = "https://api.funtranslations.com/translate/"


def yoda_translate(sentence):
    query_map = {}
    query_map['text'] = sentence
    url = base_url + "yoda.json"
    response = requests.post(url,data=query_map).json()
    return response['contents']['translated']


def run(args,sentence):
    if args.lower() == 'yoda':
        print(yoda_translate(sentence))
        scroll_message(yoda_translate(sentence))
    else:
        pass



if __name__ == '__main__':
    run(sys.argv[1],sys.argv[2])









if __name__ == '__main__':
    run(sys.argv[1],sys.argv[2])