from flask import Flask, render_template, request

# tells Flask: "turn this file into Flask application"
app = Flask(__name__)

# when to call index function:
@app.route("/")
# function, which when is called - returns result of rendering html file
def index():
    return render_template("index.html")

@app.route("/greet", methods=["POST"])
def greet():
    name = request.form.get("name", "world") # world - default value, if nothing passed
    return render_template("greet.html", name=name)