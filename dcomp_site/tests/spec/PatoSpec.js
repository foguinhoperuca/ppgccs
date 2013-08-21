describe("Pato", function() {
	var patinhas = new Pato();

	it("deve existir", function() {
		expect(patinhas).toBeDefined();
	});

	it("deve ter idade null por padrão", function() {
	  	expect(patinhas.idade).toBeNull();
	});

	it("deve ter o nome igual a 'Tio Patinhas'", function() {
	  	patinhas.nome = "Tio Patinhas";
	  	expect(patinhas.nome).toEqual('Tio Patinhas');
	});

	it("deve ter 3 sobrinhos", function() {
	  	expect(patinhas.sobrinhos.length).toEqual(3);
	});

	it("deve ter 'Luizinho' último sobrinho", function() {
		expect(patinhas.sobrinhos[2].nome).toEqual('Luizinho');
	});
});