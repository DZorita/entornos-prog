document.getElementById('register-form').addEventListener('submit', function(event) {
    event.preventDefault(); // Evitar que el formulario se envíe de manera tradicional
    
    // Obtener los valores del formulario
    const nombre = document.getElementById('nombre').value;
    const apellido1 = document.getElementById('apellido1').value;
    const apellido2 = document.getElementById('apellido2').value;
    const edad = document.getElementById('edad').value;
    const dni = document.getElementById('dni').value;
    const email = document.getElementById('email').value;
    const sexo = document.getElementById('sexo').value;
    const membresia = document.getElementById('membresia').value;
    
    // Validar que todos los campos estén completos
    if (!nombre || !apellido1 || !apellido2 || !edad || !dni || !email || !sexo || !membresia) {
        document.getElementById('error-message').textContent = "Por favor, completa todos los campos.";
        return;
    }

    // Crear el objeto de usuario
    const newUser = {
        nombre: nombre,
        apellido1: apellido1,
        apellido2: apellido2,
        edad: parseInt(edad), // Convertir edad a número
        dni: dni,
        email: email,
        sexo: sexo,
        membresia: membresia
    };

    // Enviar los datos al backend (API) para guardarlos en la base de datos
    fetch('http://localhost:8082/personas', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify(newUser)
    })
    .then(response => response.json())
    .then(data => {
        if (data.success) {
            // Si la API devuelve un objeto con éxito, redirigimos a la página de perfil
            alert('Usuario registrado correctamente');
            window.location.href = 'profile.html'; // Redirigir al perfil o alguna otra página
        } else {
            // Si algo sale mal, mostramos un mensaje de error
            document.getElementById('error-message').textContent = "Hubo un problema al registrar el usuario.";
        }
    })
    .catch(error => {
        console.error('Error:', error);
        document.getElementById('error-message').textContent = "Hubo un problema al registrar el usuario.";
    });
});
