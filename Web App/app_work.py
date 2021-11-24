import requests
import configparser
from flask import Flask, render_template, request


app = Flask(__name__)


@app_work.route("/")
def currency_app():
    return render_template("coins.html")


@app_work.route("/calculations.html", methods=["POST"])
def results():

    api_key = get_api_key()

if __name__ == '__main__':
    app_work.run()

def get_api_key():
    config = configparser.ConfigParser()
    config.read("config.ini")
    return config["Fixer"]["api"]


def get_weather(api_key):
    api_url = "http://data.fixer.io/api/latest?access_key=523c5a243729283f978cb72e658dc419".format(
        api_key)
    r = requests.get(api_url)
    return r.json()