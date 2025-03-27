vertices = []
caras = []

while True:
    print("\n1. Registrar vértices")
    print("2. Registrar caras")
    print("3. Imprimir la figura")
    print("4. Salir")
    opcion = input("Seleccione una opción: ")
    
    if opcion == "1":
        datos = input("Ingrese vértice (Ejemplo: 1 0 1): ")
        vertices.append(datos)
        print("Vértice registrado.")
    elif opcion == "2":
        datos = input("Ingrese cara (Ejemplo: 1 2): ")
        caras.append(datos)
        print("Cara registrada.")
    elif opcion == "3":
        print("\nEstructura de la figura:")
        for v in vertices:
            print(f"v {v}")
        for c in caras:
            print(f"f {c}")
    elif opcion == "4":
        print("Saliendo del programa.")
        break
    else:
        print("Opción inválida. Intente de nuevo.")
