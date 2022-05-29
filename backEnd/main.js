require('dotenv').config()
const express = require('express')
const router = require('./routes')

const PORT = process.env.PORT || 3000

let app = express()

app.set('view enige', 'ejs')
app.use('/', router)


app.listen(PORT,()=>{
    console.log(`server active on http://localhost:${PORT}`);
})

