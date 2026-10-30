/* General Styling */

body {
    margin: 0;
    padding: 0;

    font-family: Arial, sans-serif;

    background-color: #f0f4f8;
}


/* Header */

header {
    background-color: #1e3a5f;

    color: white;

    text-align: center;

    padding: 30px;
}

header h1 {
    font-size: 32px;
}


/* Navigation */

nav {
    background-color: #263f5f;

    text-align: center;

    padding: 15px;
}

nav a {
    color: white;

    text-decoration: none;

    margin: 20px;

    font-size: 18px;
}

nav a:hover {
    color: yellow;
}


/* Main Container */

.container {
    text-align: center;

    padding: 40px;
}


/* Round Picture */

.profile {
    width: 150px;
    height: 150px;

    border-radius: 50%;

    object-fit: cover;

    border: 4px solid #1e3a5f;
}


/* Headings */

h2 {
    color: #1e3a5f;

    font-size: 28px;
}


/* Paragraph */

p {
    font-size: 18px;

    line-height: 1.6;
}


/* Button */

.btn {
    display: inline-block;

    background-color: #1e3a5f;

    color: white;

    padding: 12px 25px;

    text-decoration: none;

    border-radius: 5px;

    margin-top: 15px;
}

.btn:hover {
    background-color: #4169a1;
}


/* Registration Form */

.form-container {
    width: 400px;

    margin: 40px auto;

    padding: 25px;

    background-color: white;

    border: 2px solid #1e3a5f;

    border-radius: 10px;
}


/* Form Labels */

label {
    display: block;

    margin-top: 15px;

    font-weight: bold;
}


/* Input Fields */

input[type="text"],
input[type="email"],
select,
textarea {

    width: 100%;

    padding: 10px;

    margin-top: 8px;

    border: 1px solid gray;

    border-radius: 5px;

    box-sizing: border-box;
}


/* Radio and Checkboxes */

.options {
    margin-top: 10px;
}


/* Textarea */

textarea {
    height: 100px;
}


/* Submit Button */

button {
    background-color: #1e3a5f;

    color: white;

    padding: 12px;

    width: 100%;

    border: none;

    border-radius: 5px;

    margin-top: 20px;

    font-size: 16px;

    cursor: pointer;
}

button:hover {
    background-color: #4169a1;
}


/* Thank You Page */

.thank-container {
    text-align: center;

    padding: 60px;
}


/* Footer */

footer {
    background-color: #1e3a5f;

    color: white;

    text-align: center;

    padding: 15px;

    margin-top: 30px;
}