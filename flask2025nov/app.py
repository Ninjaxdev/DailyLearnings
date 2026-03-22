from flask import Flask, render_template

app = Flask(__name__)


@app.route('/')
def home():
    return "Welcome to Flask 2025!"


@app.route('/about')
def about():
    # Render the about.html template we created
    return render_template('about.html')

if __name__ == '__main__':
    app.run(debug=True)