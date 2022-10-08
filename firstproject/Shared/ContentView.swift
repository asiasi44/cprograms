//
//  ContentView.swift
//  Shared
//
//  Created by Asim Poudel on 11/05/2022.
//

import SwiftUI

struct ContentView: View {
    @Binding var document: firstprojectDocument

    var body: some View {
        TextEditor(text: $document.text)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView(document: .constant(firstprojectDocument()))
    }
}
